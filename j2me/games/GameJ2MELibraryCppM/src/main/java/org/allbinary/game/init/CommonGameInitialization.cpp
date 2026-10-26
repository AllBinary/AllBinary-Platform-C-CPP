
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/resource/ResourceInitialization.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameInitialization.h"

class CommonGameInitialization: public BaseGameInitialization {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

protected: CommonGameInitialization(std::vector<ResourceInitialization> resourceInitializationArray, int32_t portion) : BaseGameInitialization(resourceInitializationArray, portion){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, int32_t level){
super.init(abeClientInformation, commandListener, level);
    

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(!this->isGameInitialized() && level == resourceLoadingLevelFactory.LOAD_ALL.getLevel())
                        
                                    {
                                    this->setGameInitialized(true);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
SmallIntegerSingletonFactory::getInstance().init();
    
progressCanvas.addNormalPortion(50, "Integers");
    
PointFactory::getInstance().init();
    
progressCanvas.addNormalPortion(50, "Points");
    
AngleFactory::getInstance();
    
progressCanvas.addNormalPortion(50, "Angles");
    
this->initGame();
    
this->resourceInitializationArray[this->GAME_RESOURCES].init();
    

                                    }
                                
super.resourceInitialization(level);
    
}


                //@Throws(Exception.constructor)
            
    public: void initGame(){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


};

            

