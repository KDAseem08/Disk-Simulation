# Introduction (A Short summary of the project)

In this project, a disk simulation software was attacked and some header files along with source files were corrupted. The task was to recreate the original files using the information provided in the intruction.html file
as well as using the help from refman.pdf file.

# Modifications Made to the corrupted files

1. **disk.h**: Defined the structure of a disk using encapsualation. The attributes of disk such as X,Y,Radius are defined as private and I have provided public getter and setter functions to access and modify these attributes. 

2. **disk.cpp**: Implemented the getter and setter functions for the disk attribute as well implemented the distance method that calculates the distance between two disk.

3. **system.h**: Defined the System class which shows interaction between disks given certain parameters like the number of disks, the radius of the disks and the size of the system. I have encapsulated the attributes as private as well at methods like overlap,enforce boundary and uniform. 

4. **system.cpp**: Included the disk header file reading the refman pdf file. Most of the methods were correctly implemeted ,I did change them use the getters and setters of the disk class now. I implemented the uniform method which returns a random number between min and max.

5. **main.cpp**: The code given was already correctly implemented but I added some enhancement such as the ability to pass on CLI arguments to specify the number of disks, radius and size of the system. If custom arguemnts are to be provided then all of them must be provided otherwise the default values will be used.

6. **view.ipynb**: I changed the delimiter so that files can be correctly sorted and read. I have added a dynamic bar that shows the progress of the simulation.

**Running the code**: 

1. Clone the repo:
````
git clone https://github.com/KDAseem08/Disk-Simulation.git
```

2. Navigate to the project directory for eg:
 ``` 
 cd Disk-Simulation
 ```

3. Compile the code : ``` mingw32-make -f MakeFile ``

4. Run the code using the example run commands below:
    1.  ``` mingw32-make -f MakeFile run ```
        This example will run executable with default parameters of int N = 20;double maxDisplacement  = 0.6;
        double radius = 0.5;double L = 20.0;
    2. ``` mingw32-make -f MakeFile run ARGS="10 0.6 0.5 20.0" ```  
        This example will run executable with custom parameters of int N = 10;double maxDisplacement  = 0.6;
        double radius = 0.5;double L = 20.0;
    Note: Check if your confs folder is populated with the output files after running any 1 of the above command.

5. To visualize the output, we can run the view.ipynb file. Select a Python environment and run all cells.

