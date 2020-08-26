vector<int> gradingStudents(vector<int> grades) 
{
    int i = 0;
    int size = grades.size();
    for(i = 0; i<size; i++)
    {
        if(grades[i] >= 0 && grades[i] <=100)
        {
            if(grades[i] >= 38)
            {
                if(5 - grades[i]%5 < 3) grades[i] += (5- grades[i]%5);   
            }
        }
    }
    return grades;
}
