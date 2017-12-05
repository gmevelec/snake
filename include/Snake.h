class Snake
{
private:
	typedef struct 
	{
		int x;
		int y;
	}Position;

public:
	Snake()
	{
		bodyPosition.push_back(Position({0,0}));
		bodyPosition.push_back(Position({0,1}));
		bodyPosition.push_back(Position({0,2}));
	};
	~Snake();

	std::vector<Position> bodyPosition;
};