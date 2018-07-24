#include "stdafx.h"
#include "NeuralNetwork.h"
#include <iostream>

using std::cout;

/// Generates a random float value in the array.
void NeuralNetwork::GenerateRandomFloats(int count, vector<float>& input)
{
	/* Checks if count is a valid number and throws an error if not */
	if (count <= 0) { throw "Input cannot be less than or equal to 0"; }
	else
	{
		/* Generates and pushes variables to input  */
		for (int i = 0; i < count; i++) { input.push_back(static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 10))); }
	}
}

/// Outputs array
void NeuralNetwork::OutputArray(vector<float> input)
{
	/* For each item in array, output the value */
	for (float i : input) { cout << i << '\n'; }
	/* Flush buffer */
	cout << '\n';
	cout.flush();
}

/// Convert array to sigmoid
void NeuralNetwork::ConvertSigmoid(vector<float>& input)
{
	/* 1. Copy input to temporary array: temparr */
	vector<float> temparr;
	for (int i = 0; i < input.size(); i++) { temparr.push_back(input[i]); }

	/* 2. Clear the input array */
	input.clear();

	/* 3. Mathmatically add sigmoid of each variable put in temparr */
	for (float x : temparr) { input.push_back(x / (1 + abs(x))); }
}
