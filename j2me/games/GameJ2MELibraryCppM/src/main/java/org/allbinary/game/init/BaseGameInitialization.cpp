
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h>

      
#include <org/allbinary/game/resource/ResourceInitialization.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h>

      
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>

      
#include <org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInitializationInterface.h"

class BaseGameInitialization
            : public Object
        : public GameInitializationInterface {

    public: static const BaseGameInitialization NULL_BASE_GAME_INITIALIZATION = BaseGameInitialization({}, 0);

    protected: std::vector<ResourceInitialization> resourceInitializationArray;

    private: int32_t portion;

    private: bool initialized= false;

    protected: const int32_t EARLY_RESOURCES = 0;

    protected: const int32_t GAME_RESOURCES = 1;

    protected: const int32_t EARLY_CHANGABLE_RESOURCES = 2;

    protected: const int32_t GAME_CHANGABLE_RESOURCES = 3;

public: BaseGameInitialization(std::vector<ResourceInitialization> resourceInitializationArray, int32_t portion){
this->resourceInitializationArray= resourceInitializationArray;
    
this->portion= portion;
    
}


                //@Throws(Exception.constructor)
            
    public: void initKey(int32_t portion){
}


                //@Throws(Exception.constructor)
            
    protected: void initKeyMapping(AbeClientInformationInterface abeClientInformation, int32_t portion){

                        if(ChangedGameFeatureListener::getInstance().isChangedFeature(InputFeatureFactory::getInstance().INPUT_MAPPING))
                        
                                    {
                                    PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().init(abeClientInformation);
    
ProgressCanvasFactory::getInstance().addNormalPortion(50, "Game Keys");
    
ChangedGameFeatureListener::getInstance().remove(InputFeatureFactory::getInstance().INPUT_MAPPING);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, int32_t level){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(!this->isInitialized() && (level == resourceLoadingLevelFactory.LOAD_ALL.getLevel() || level == resourceLoadingLevelFactory.LOAD_EARLY.getLevel()))
                        
                                    {
                                    
    int32_t localPortion = 40;;
    

                        if(level == resourceLoadingLevelFactory.LOAD_EARLY.getLevel())
                        
                                    {
                                    localPortion= 8;
    

                                    }
                                
this->setInitialized(true);
    
this->initKey(this->getPortion());
    
this->initKeyMapping(abeClientInformation, this->getPortion());
    
GameKeyEventFactory::getInstance().init();
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.addNormalPortion(localPortion, "Game Key Events");
    
BasicTouchInputFactory::getInstance().init(PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping());
    
CancelTouchButtonInputFactory::getInstance();
    
progressCanvas.addNormalPortion(localPortion, "Touch Input");
    
CompleteMotionGestureInputToGameMotionGestureInput::getInstance().init();
    
progressCanvas.addNormalPortion(localPortion, "Motion Input");
    
GameFeatureImageCacheFactory::init();
    
progressCanvas.addNormalPortion(localPortion, "Image Cache");
    
this->resourceInitializationArray[this->EARLY_RESOURCES].init();
    

                                    }
                                
}


    private: bool gameInitialized= false;

    private: bool allLoaded= false;

                //@Throws(Exception.constructor)
            
    public: void resourceInitialization(int32_t level){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(this->resourceAnimationChange() && level == resourceLoadingLevelFactory.LOAD_EARLY.getLevel())
                        
                                    {
                                    this->clearResources();
    
this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES].init();
    

                                    }
                                

                        if(this->resourceAnimationChange() && level == resourceLoadingLevelFactory.LOAD_ALL.getLevel())
                        
                                    {
                                    
                        if(this->allLoaded)
                        
                                    {
                                    this->clearResources();
    

                                    }
                                

                        if(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().getList().size() == 0)
                        
                                    {
                                    this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES].init();
    

                                    }
                                
this->resourceInitializationArray[this->GAME_CHANGABLE_RESOURCES].init();
    
this->allLoaded= true;
    

                                    }
                                
}


    public: bool resourceAnimationChange(){

    ChangedGameFeatureListener changedGameFeatureListener = ChangedGameFeatureListener::getInstance();;
    

    GameConfigurationCentral gameConfigurationCentral = GameConfigurationCentral::getInstance();;
    

                        if(changedGameFeatureListener.isChangedGameConfiguration(gameConfigurationCentral.SCALE))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(ChangedGameFeatureListener::getInstance().isChangedFeature(MainFeatureFactory::getInstance().STATIC))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    private: void clearResources(){
this->allLoaded= false;
    
GameFeatureImageCacheFactory::releaseAll();
    

    FeaturedAnimationInterfaceFactoryInterfaceFactory featuredAnimationInterfaceFactoryInterfaceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance();;
    
featuredAnimationInterfaceFactoryInterfaceFactory.clear();
    
FeaturedResourceRelativeRelationshipFactory::getInstance().clear();
    
}


    protected: void setGameInitialized(bool gameInitialized){
this->gameInitialized= gameInitialized;
    
}


    protected: bool isGameInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInitialized;
    
}


    protected: int32_t getPortion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->portion;
    
}


    public: void setInitialized(bool initialized){
this->initialized= initialized;
    
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


};

            

