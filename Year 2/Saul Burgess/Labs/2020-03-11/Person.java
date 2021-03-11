/***********************************************************************************************************************
 * @description: Person Class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class Person {
    private String firstName;
    private String lastName;
    private Date dateOfBirth;
    private String gender;

    public Person(String firstName, String lastName, Date dateOfBirth, String gender) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.dateOfBirth = dateOfBirth;
        this.gender = gender;
    }

    public String getFirstName() {
        return this.firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public Date getDateOfBirth() {
        return this.dateOfBirth;
    }

    public void setDateOfBirth(Date dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }

    public String getGender() {
        return this.gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    @Override
    public String toString() {
        return "{" + " firstName='" + getFirstName() + "'" + ", lastName='" + getLastName() + "'" + ", dateOfBirth='"
                + getDateOfBirth() + "'" + ", gender='" + getGender() + "'" + "}";
    }
}
