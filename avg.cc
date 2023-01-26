bool isPossible(int index, int sum)
{
	if (index == n)
	{

		if ((sum % M) == 0)
			return true;
		return false;
	}

	bool placeAdd = isPossible(index + 1,
							   sum + arr[index]);

	bool placeMinus = isPossible(index + 1,
								 sum - arr[index]);

	if (placeAdd || placeMinus)
		return true;

	return false;
}
int main()
{
	cout << isPossible()
}
