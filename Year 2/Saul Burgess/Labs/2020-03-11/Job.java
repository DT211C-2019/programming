/***********************************************************************************************************************
 * @description: File Processing Class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class Job {

    private double salary;
    private String role;
    private int jobID;

    public Job(double salary, String role, int jobID) {
        this.salary = salary;

        String file = FileProcessor.readFile("roles.txt");

        if (file.contains(role) == true) {
            this.role = role;
        } else {
            System.out.println("This role is invalid, setting to Undefined");
            this.role = "Undefined";
        }

        this.role = role;
        this.jobID = jobID;
    }

    public double getSalary() {
        return this.salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public String getRole() {
        return this.role;
    }

    public void setRole(String role) {
        this.role = role;
    }

    public int getJobID() {
        return this.jobID;
    }

    public void setJobID(int jobID) {
        this.jobID = jobID;
    }

    @Override
    public String toString() {
        return "{" + " salary='" + getSalary() + "'" + ", role='" + getRole() + "'" + ", jobID='" + getJobID() + "'"
                + "}";
    }

}
