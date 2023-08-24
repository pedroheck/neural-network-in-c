// Including necessary standard libraries
#include <stdlib.h> // Standard library for general-purpose functions
#include <stdio.h> // Standard library for input-output operations
#include <math.h> // Standard library for mathematical operations

// Description of the program
// ---------------------------------------------------------
// This code snippet aims to set up a simple Neural Network structure to learn the XOR function
// ---------------------------------------------------------


// Defining global constants for the neural network's configuration
#define numImputs 2 // Number of input nodes in the network
#define numHiddenNodes 2 // Number of hidden nodes in the network
#define numOutputs 1 // Number of output nodes in the network
#define numTrainingSets 4 // Number of training sets, corresponding to the four possible inputs for the XOR function

int main(void){
    const learningRate = 0.1f; // The rate at which the NN will learn, controlling the step size in weight updates

    // Arrays for storing values at different layers of the neural network
    double hiddenLayer[numHiddenNodes];
    double outputLayer[numOutputs];

    // Arrays for biases at hidden and output layers
    double hiddenLayerBias[numHiddenNodes];
    double outputLayerBias[numOutputs];

    // Matrices for weights connecting different layers
    double hiddenWeights[numImputs][numHiddenNodes];
    double outputWeights[numHiddenNodes][numOutputs];
}
