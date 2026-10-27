
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"

class GameTickDisplayInfoSingleton
            : public Object
         {

    private: static GameTickDisplayInfoSingleton* instance() { static std::unique_ptr<GameTickDisplayInfoSingleton> value(new GameTickDisplayInfoSingleton()); return value.get(); }

    public: static GameTickDisplayInfoSingleton* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameTickDisplayInfoSingleton::instance();
    
}


    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: int32_t lastWidth = this->displayInfoSingleton->getLastWidth();

    private: int32_t lastHeight = this->displayInfoSingleton->getLastHeight();

    private: int32_t lastHalfWidth = this->displayInfoSingleton->getLastHalfWidth();

    private: int32_t lastHalfHeight = this->displayInfoSingleton->getLastHalfHeight();

    public: void update(){
this->lastWidth= this->displayInfoSingleton->getLastWidth();
    
this->lastHeight= this->displayInfoSingleton->getLastHeight();
    
this->lastHalfWidth= this->displayInfoSingleton->getLastHalfWidth();
    
this->lastHalfHeight= this->displayInfoSingleton->getLastHalfHeight();
    
}


    public: int32_t getLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastWidth;
    
}


    public: int32_t getLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHeight;
    
}


    public: int32_t getLastHalfWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalfWidth;
    
}


    public: int32_t getLastHalfHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalfHeight;
    
}


};

            

