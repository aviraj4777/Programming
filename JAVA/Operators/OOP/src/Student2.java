class Student2 {

}
class Subject {
    String subID;
    String name;
    short maxMarks;
    short marksObtain;

    public Subject(String subID, String name){
        this.subID = subID;
        this.name = name;
    }
    public Subject(String subID, String name, short maxMarks, short marksObtain) {
        this.subID = subID;
        this.name = name;
        this.maxMarks = maxMarks;
        this.marksObtain = marksObtain;
    }

    public String getName() {return name;}
    public String getSubID() {return subID;}
    public short getMaxMarks() {return maxMarks;}
    public short getMarksObtain() {return marksObtain;}

    public void setMaxMarks(short mm)
    {
        maxMarks=mm;
    }

    public void setMarksObtain(short m)
    {
        marksObtain=m;
    }

    boolean isQualified()
    {
        return marksObtain>=maxMarks/10*4;
    }

    public String toString()
    {
        return"\n SubjectID: "+subID+"\n Name "+name+"\n MarksObtained "+marksObtain;
    }
}
