
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H

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

    public: static GameTickDisplayInfoSingleton* getInstance();

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: int32_t lastWidth = this->displayInfoSingleton->getLastWidth();

    private: int32_t lastHeight = this->displayInfoSingleton->getLastHeight();

    private: int32_t lastHalfWidth = this->displayInfoSingleton->getLastHalfWidth();

    private: int32_t lastHalfHeight = this->displayInfoSingleton->getLastHalfHeight();

    public: void update();

    public: int32_t getLastWidth();

    public: int32_t getLastHeight();

    public: int32_t getLastHalfWidth();

    public: int32_t getLastHalfHeight();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
