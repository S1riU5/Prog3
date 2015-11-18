
class Digitswitch
{
public:
	/// <summary>
	///  create a instance of the  class Digitswitch.
	/// Initialize, switch the numbers and display the array int* digits
	/// </summary>
	Digitswitch();

	/// <summary>
	/// display the content of *(digits)
	/// </summary>
	void outputArray();

	/// <summary>
	/// loops over *(digits) and switches odd  indexes with the next value 
	/// </summary>
	void switchDigits();

	/// <summary>
	/// Free all allocated memory
	/// </summary>
	virtual ~Digitswitch();
private:

	/// <summary>
	/// Initialize *(digits) with values
	/// </summary>
	void initDigit();

	/// <summary>
	/// swap the array index given via position and the nex index
	/// </summary>
	/// <param name="arr">*c</param>
	/// <param name="position"></param>
	void changeNubers(int *(arr), int position);
	int const static ARRAY_SIZE = 10;
	int digits[ARRAY_SIZE];
	
};
