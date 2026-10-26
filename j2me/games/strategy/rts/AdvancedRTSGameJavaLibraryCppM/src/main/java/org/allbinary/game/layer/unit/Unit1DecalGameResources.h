
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Unit1DecalGameResources: public BasicGameResources {

    private: static Unit1DecalGameResources instance() { return Unit1DecalGameResources(); }

    public: static BasicGameResources getInstance();

private: Unit1DecalGameResources();

                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    protected: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_H
