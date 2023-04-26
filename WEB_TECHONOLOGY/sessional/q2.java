class Invalid_Date_Exception extends Exception {
    Invalid_Date_Exception(String s) {
        super(s);
    }

}

class Number_Name_Exception extends Exception {
    Number_Name_Exception(String s) {
        super(s);
    }
}

class q2 {

    static void checkDate(int year, int month, int day) throws Invalid_Date_Exception {
        try {
            if (year < 0 || year > 2022 || month < 0 || month > 12 || day < 0 || day > 31) {
                throw new Invalid_Date_Exception("Invalid date");
            } else {
                System.out.println(day + "-" + year + "-" + month + "-" + day);
            }
        } catch (Invalid_Date_Exception e) {
            System.out.println(e);
        }
    }

    static void checkFormat() throws Number_Name_Exception {
        try {
            String name = "one";
            if (name.matches("[0-9]+")) {
                throw new Number_Name_Exception("Invalid name");
            } else {
                System.out.println("Name is valid");
            }
        } catch (Number_Name_Exception e) {
            System.out.println(e);
        }

    }

    public static void main(String[] args) {
        
        try {
            checkDate(2021, 12, 31);
            checkFormat();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
