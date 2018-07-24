#pragma once
#include <vector>

using std::vector;

class NeuralNetwork
{
public:
	void GenerateRandomFloats(int count, vector<float> &input);
	void OutputArray(vector<float> input);
	void ConvertSigmoid(vector<float> &input);
	vector<float> input;
	vector<float> weights;
	vector<float> output;
};

