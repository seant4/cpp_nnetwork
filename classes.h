#include <cmath>

class BASE_NODE{
	public:
		int id;
		int *value;
		int org_value;
		int next_id;
		int weight;
		void setValues(int_org_value, int input_id, int *input_value, int input_next_id){
			id = input_id;
			value = &input_value;
			next_id = input_next_id;
			org_value = int_org_value;
			weight = 0;
		void run_function(){
			*value = exp(*value + weight);
		}
		void train_weight(){
			weight = *value - org_value
		}

};

class NODE{
	public:
		int id;
		int *value;
		int next_id;
		int weight;
		void setValues(int id, int *value, int next_id);
		void run_function(int *value);
}

class END_NODE{
	public:
		int id
		int *value;
		int next_id;
		int weight;
		void setValues(int id, int *value, int next_id);
		void run_function(int *value);
		int return_value();
}

