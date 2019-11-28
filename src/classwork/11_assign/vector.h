//
template<typename T>

class Vector
{
public:
	Vector();
	Vector(size_t sz);
	Vector(const Vector<T>& v); //copy constructor RULE OF THREE
	Vector& operator = (const Vector<T>& v); // copy assignment RULE OF THREE
	Vector(Vector<T>&& v); // move contrustors
	Vector& operator =(Vector<T>&& v); //move assignment
	size_t Size()const { return size; }
	T& operator[] (size_t i){ return nums[i]; }
	T& operator[] (size_t i) const { return nums[i]; }
	void Reserve(size_t new_allocation);
	size_t Capacity() const { return space; } //define inline
	void Resize(size_t new_size);
	void Push_Back(T value);
	~Vector(); //desconstructor RULE OF THREE
private:

	size_t size;
	size_t space;
	T* nums;
	const int Reserve_Default_Size{ 8 };
	const int RESERVE_SPACE_MUITIPLIER{ 2 };
};