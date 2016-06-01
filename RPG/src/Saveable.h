#pragma once
class Saveable
{
	public:
		Saveable() {}
		~Saveable() {}

		virtual int Save(void) { return -1; }
		virtual bool Load(void) { return false; }
};

