
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LapInfo
            : public Object
         {
        

    public static NULL_LAP_INFO: LapInfo = new LapInfo( -1);

    private: numberOfLaps: int32_t;

    private: totalLaps: int32_t;

public constructor (int32_t totalLaps){

            super();
        this.totalLaps= totalLaps;
    
this.numberOfLaps= 1;
    
}


    public add(){
this.numberOfLaps++;
    
}


    public int32_t getCurrentLap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.numberOfLaps;
    
}


    public int32_t getTotalLaps(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalLaps;
    
}


    public bool isDone(){

                        if(this.numberOfLaps >= this.totalLaps)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("isDone: ");
    
stringBuffer!.appendboolean(this.isDone());
    
stringBuffer!.append(" CurrentLap: ");
    
stringBuffer!.appendint(this.getCurrentLap());
    
stringBuffer!.append(" Total Laps: ");
    
stringBuffer!.appendint(this.getTotalLaps());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

