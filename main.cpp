#include <iostream>
#include <string>
#include "system.h"
// HINT: COMPLETE THE INCLUDE STATEMENT


/**
 * @brief Entry point of the program.
 *
 * This function initializes the program and manages execution.
 */
int main(int argc,char* argv[]) {
    // Just learnt that command line output is passed as argument count and argument vector to main
    
    // number of disks (default)
    int N = 20;
    double maxDisplacement  = 0.6;
    double radius = 0.5;
    double L = 20.0;


    if (argc ==5){
        // extra 4 args are correctly provided (0th arg is the program executable)
        N = std::stoi(argv[1]);
        maxDisplacement = std::stod(argv[2]);
        radius = std::stod(argv[3]);
        L = std::stod(argv[4]);

    }
    else if (argc != 1) 
    {
        std::cerr << "How to call executable: " << argv[0] << " <N> <maxDisplacement> <dt> <L>\n";
        std::cerr << "Standard default arguments: " << argv[0] << " 50 0.6 0.5 20\n";
        return 1; // exit
    }
    // initialise the system
    System system(N, maxDisplacement,radius,L,1234);

    // total number of iterations
    int iterations = N*500;

    for (int i = 0; i < iterations; ++i) {
        // move one disk
        system.step();
        // save a configuration
        system.save("confs/conf"+std::to_string(i));
    }
    return 0;
}