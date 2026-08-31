
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Scoreable.h"

class NoScoreable: public Scoreable {
        

    private: static const SINGLETON: NoScoreable = new NoScoreable();

    public static NoScoreable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoScoreable.SINGLETON;
    
}


private constructor (){
            super(0);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public addPoints(int32_t points){
}


    public removePoints(int32_t points){
}


};

            

