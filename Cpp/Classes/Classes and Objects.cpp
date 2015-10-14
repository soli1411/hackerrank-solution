//Classes and Objects hackerrank solution
class Student{
    public:
    int scores[5];
    void Input()
        {for (int i=0;i<5;i++)
            cin>>scores[i];}
    int CalculateTotalScore()
        {int tot=0;
         for (int i=0;i<5;i++)
            tot+=scores[i];
         return tot;}   
};
