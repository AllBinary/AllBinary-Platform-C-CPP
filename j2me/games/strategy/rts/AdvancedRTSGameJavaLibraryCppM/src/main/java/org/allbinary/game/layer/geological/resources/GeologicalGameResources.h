
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
class GameGraphicsResourceUtil;
class AndroidUtil;
class GraphicsFeatureFactory;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeologicalGameResources: public BasicGameResources {

    private: static Object* instance;

    public: static BasicGameResources* getInstance();

private: GeologicalGameResources();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>)
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
