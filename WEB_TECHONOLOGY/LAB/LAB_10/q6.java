class TimeException extends Exception {
    TimeException(String s){
        super(s);
    }
}
class q6{
    static void check (int hour, int min, int sec){
        
        if(hour > 24 || hour < 0){
            try{
                throw new TimeException("Invalid Hour");
            }
            catch(TimeException e){
                System.out.println(e);
            }
        }
        if(min > 60 || min < 0){
            try{
                throw new TimeException("Invalid Minute");
            }
            catch(TimeException e){
                System.out.println(e);
            }
        }
        if(sec > 60 || sec < 0){
            try{
                throw new TimeException("Invalid Second");
            }
            catch(TimeException e){
                System.out.println(e);
            }
        }
        else if (hour <= 24 && hour >= 0 && min <= 60 && min >= 0 && sec <= 60 && sec >= 0){
            System.out.println("Time is: " + hour + ":" + min + ":" + sec);
        }

        
    }
    public static void main(String[] args) {
        check(22, 4, 60);
    }
}
