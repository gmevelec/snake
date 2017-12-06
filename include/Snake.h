class Snake
{
public:
	Snake();
	~Snake();

	std::vector<Position> bodyPositions;

private:
	typedef struct
	{
		int x;
		int y;
	}Position;
};
