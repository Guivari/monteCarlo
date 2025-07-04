# monteCarlo
Project exploring monte carlo simulations by finding pi.

Given a radius r, the program simulates a square of length r and a circle of radius r. The two shapes are non-overlapping and are placed in a 2d plane of r * 3r.

The program then simulates a predetermined amount of random points in this 2d plane, counting the number of points collected in each shape.

π represent the ratio of a circle's circumference to its diameter (https://en.wikipedia.org/wiki/Pi). This simulation explores this thoery using a monte carlo simulation. It counts the number of random points that lands in the circle, compared to those that land in the square. The resulting ratio should approach 3.14159265...  
