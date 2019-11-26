//

class Vector
{
public:
	Vector();
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor RULE OF THREE
	Vector& operator = (const Vector& v); // copy assignment RULE OF THREE
	Vector(Vector&& v); // move contrustors
	Vector& operator =(Vector&& v); //move assignment
	size_t Size()const { return size; }
	int& operator[] (int i){ return nums[i]; }
	int& operator[] (int i) const { return nums[i]; }
	void Reserve(size_t new_allocation);
	int Capacity() const { return space; } //define inline
	void Resize(size_t new_size);
	void Push_Back(int value);
	~Vector(); //desconstructor RULE OF THREE
private:

	size_t size;
	size_t space;
	int* nums;
	const int Reserve_Default_Size{ 8 };
	const int RESERVE_SPACE_MUITIPLIER{ 2 };
};