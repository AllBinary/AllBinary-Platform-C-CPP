
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"

class FeaturedResourceFactory
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

public: FeaturedResourceFactory(){
}


    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: const std::string ANIMATION_FEATURES = "Animation Features: Vector: ";

    private: const std::string IMAGE_LABEL = " Image: ";

    private: const std::string IMAGE_GRAPHICS_ARRAY = "Image Array: ";

    private: const std::string IMAGE_GRAPHICS_ROTATION = "Image Rotate: ";

    private: const std::string SPRITE_QUARTER = " Sprite Quarter: ";

    private: const std::string SPRITE_FULL = " Sprite Full: ";

    private: const std::string IS_LOADING_LEVEL_LABEL = " isLoadingLevel ";

    private: const std::string IS_FEATURE = " isFeature: ";

    private: const std::string GAME_FEATURE_CONTROLLED = "GameFeatureControlledInterface: ";

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameFeatureControlledInterface* featureInterface = dynamic_cast<GameFeatureControlledInterface*>(this->list->objectArray[index]);;
    

    bool isLoadingLevel = featureInterface->isLoadingLevel(level);;
    

    bool isFeature = featureInterface->isFeature();;
    
this->logUtil->putF((new StringMaker())->append(this->GAME_FEATURE_CONTROLLED)->append(featureInterface->toString())->append(this->IS_LOADING_LEVEL_LABEL)->append(ResourceLoadingLevelFactory::getInstance()->getLevelString(level))->append(CommonSeps::getInstance()->COLON_SEP)->appendboolean(isLoadingLevel)->append(this->IS_FEATURE)->appendboolean(isFeature)->toString(), this, this->commonStrings->INIT);
    

                        if(isLoadingLevel && isFeature)
                        
                                    {
                                    featureInterface->init(level);
    

                                    }
                                
}


    Features* features = Features::getInstance();;
    

    GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->ANIMATION_FEATURES);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->VECTOR_GRAPHICS));
    
stringBuffer->append(this->IMAGE_LABEL);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->IMAGE_GRAPHICS));
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->INIT);
    

                        if(features->isFeature(graphicsFeatureFactory->IMAGE_GRAPHICS))
                        
                                    {
                                    stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(this->IMAGE_GRAPHICS_ARRAY);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
    
stringBuffer->append(this->IMAGE_GRAPHICS_ROTATION);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
    
stringBuffer->append(this->SPRITE_QUARTER);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS));
    
stringBuffer->append(this->SPRITE_FULL);
    
stringBuffer->appendboolean(features->isFeature(graphicsFeatureFactory->SPRITE_FULL_GRAPHICS));
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->INIT);
    

                                    }
                                
}


    public: void clear(){
this->list->clear();
    
}


    public: void add(GameFeatureControlledInterface* featureInterface){
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(StringUtil::getInstance()->toString(featureInterface))->toString(), this, this->commonStrings->ADD);
    
this->list->add(featureInterface);
    
}


    public: BasicArrayList* getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

