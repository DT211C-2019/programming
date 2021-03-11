/***********************************************************************************************************************
 * @description: Employee Class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class Employee extends Person {

    private Job job;
    private int personnelNumber;
    private Date startDate;
    private int nextNumber;

    public Employee(Job job, int personnelNumber, Date startDate, int nextNumber, String firstName, String lastName,
            Date dateOfBirth, String gender) {

        super(firstName, lastName, dateOfBirth, gender);
        this.job = job;
        this.personnelNumber = personnelNumber;
        this.startDate = startDate;
        this.nextNumber = nextNumber;
    }

    public Job getJob() {
        return this.job;
    }

    public void setJob(Job job) {
        this.job = job;
    }

    public int getPersonnelNumber() {
        return this.personnelNumber;
    }

    public void setPersonnelNumber(int personnelNumber) {
        this.personnelNumber = personnelNumber;
    }

    public Date getStartDate() {
        return this.startDate;
    }

    public void setStartDate(Date startDate) {
        this.startDate = startDate;
    }

    public int getNextNumber() {
        return this.nextNumber;
    }

    public void setNextNumber(int nextNumber) {
        this.nextNumber = nextNumber;
    }

    @Override
    public String toString() {
        FileProcessor.writeFile(this.getFirstName() + " " + this.getLastName(), "names.txt");
        return "{" + " job='" + getJob() + "'" + ", personnelNumber='" + getPersonnelNumber() + "'" + ", startDate='"
                + getStartDate() + "'" + ", nextNumber='" + getNextNumber() + "'" + "}";
    }

}
