
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/Scoreable.h"

class NoScoreable: public Scoreable {

    private: static NoScoreable* SINGLETON() { static std::unique_ptr<NoScoreable> value(new NoScoreable()); return value.get(); }

    public: static NoScoreable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoScoreable::SINGLETON();
    
}


private: NoScoreable() : Scoreable(0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void addPoints(int32_t points){
}


    public: void removePoints(int32_t points){
}


};

            

