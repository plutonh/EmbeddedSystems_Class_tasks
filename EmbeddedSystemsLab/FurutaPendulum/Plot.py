import furuta_plot as fuplot
import logging
import matplotlib.pyplot as plt
import numpy as np
import sys
import csv
f = open('pendulum.csv','r')
rdr = csv.reader(f)
time_array = []
theta_array = []
phi_array = []
control_array = []
for idx, line in enumerate(rdr):
    if(idx>0): 
        time_array.append(float(line[0]))
        theta_array.append(float(line[2]))
        phi_array.append(float(line[3]))
        control_array.append(float(line[1]))

print(str(len(time_array)) + " " + str(len(theta_array)) + " " + str(len(phi_array)))

def main():
    fig = plt.figure(figsize=(16, 9))
    p = fuplot.FurutaPlotter(fig, gridsize=(1, 2))

    p.add_3D(span=1)

    p.add_linear(y="theta", x="t", span=2, color="orange",
                 x_label="t [s]",
                 y_label="$\\theta$", y_transform=lambda y: y)
    plt.figure(2)
    plt.title('Furuta Pendulum')
    plt.xlabel('Time(sec)')
    
    plt.plot(time_array, control_array, label = 'Control', color = 'purple')
    plt.plot(time_array, theta_array, label = 'Theta', color = 'orange')
    plt.plot(time_array, phi_array, label = 'Phi', color = 'skyblue')
    plt.legend()
    p.animate(fps=30,
              t=time_array,
              phi=phi_array,
              theta=theta_array)
    
if __name__ == "__main__":
    loghandler = logging.StreamHandler(sys.stderr)
    loghandler.setFormatter(logging.Formatter("[%(asctime)s %(levelname)s] %(name)s:%(lineno)d: %(message)s"))
    logging.getLogger().addHandler(loghandler)
    logging.getLogger().setLevel(logging.INFO)

    main()