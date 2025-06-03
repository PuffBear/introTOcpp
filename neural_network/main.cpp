#include <iostream>
#include <vector>
#include <stdlib.h>

class NeuralNetwork {
    // includes input layer, hidden layer, output layer,
    // ReLU, ReLUDerive, backpropagation, forward-propagation
    public:
        // this will be the constructor and public API
        NeuralNetwork(const int inputSize, const int hiddenLayerSize, const int outputSize, const int numHiddenLayers, const float learningRate):
        inputSize(inputSize), hiddenLayerSize(hiddenLayerSize), outputSize(outputSize), numHiddenLayers(numHiddenLayers){
            InitializeRandomWeightsAndBiases();
        }

        // constructor to call the _train function
        void Train(const std::vector<float> input, const float target) {
            _train(input, target);
        }
        
        // constructor to call the _predict function 
        float Predict(const std::vector<float> input){
            return _predict(input);
        }

    private:
        // Variables
        int inputSize, hiddenLayerSize, outputSize, numHiddenLayers;
        float biasOutput, learningRate;

        std::vector<std::vector<std::vector<float>>> weights;
        std::vector<std::vector<float>> biases;
        
        // train function does the back propagation
        void _train(const std::vector<float> input, const float target) {}

        // prediction function
        float _predict(const std::vector<float> input) {}

        // activation functions
        float ReLU(float x) {
            if (x > 0) {
                return x;
            }
            return 0;
        }

        float ReLUDeriv(float x) {
            if (x > 0) {
                return 1;
            }
            return 0;
        }

        float MSE(float y, float yPred) {
            return 0.5 * (y - yPred) * (y - yPred);
        }

        float MSEDeriv(float y, float yPred) {
            return yPred - y;
        }

        void InitializeRandomWeightsAndBiases() {}
};