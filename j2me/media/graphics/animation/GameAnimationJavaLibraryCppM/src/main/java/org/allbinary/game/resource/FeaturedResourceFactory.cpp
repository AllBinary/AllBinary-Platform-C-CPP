
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceLoadingLevelFactory.h"

class FeaturedResourceFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const list: BasicArrayList = new BasicArrayListD();

public constructor (){

            super();
        }


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const ANIMATION_FEATURES: string = "Animation Features: Vector: ";

    private: const IMAGE_LABEL: string = " Image: ";

    private: const IMAGE_GRAPHICS_ARRAY: string = "Image Array: ";

    private: const IMAGE_GRAPHICS_ROTATION: string = "Image Rotate: ";

    private: const SPRITE_QUARTER: string = " Sprite Quarter: ";

    private: const SPRITE_FULL: string = " Sprite Full: ";

    private: const IS_LOADING_LEVEL_LABEL: string = " isLoadingLevel ";

    private: const IS_FEATURE: string = " isFeature: ";

    private: const GAME_FEATURE_CONTROLLED: string = "GameFeatureControlledInterface: ";

                //@Throws(Exception.constructor)
            
    public init(int32_t level){

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    featureInterface: GameFeatureControlledInterface = this.list.objectArray[index]! as GameFeatureControlledInterface;;
    

    isLoadingLevel: bool = featureInterface!.isLoadingLevel(level)!;;
    

    isFeature: bool = featureInterface!.isFeature()!;;
    
this.logUtil!.putF(new StringMaker().append(this.GAME_FEATURE_CONTROLLED)!.append(featureInterface!.toString())!.append(this.IS_LOADING_LEVEL_LABEL)!.append(ResourceLoadingLevelFactory.getInstance()!.getLevelString(level))!.append(CommonSeps.getInstance()!.COLON_SEP)!.appendboolean(isLoadingLevel)!.append(this.IS_FEATURE)!.appendboolean(isFeature)!.toString(), this, this.commonStrings!.INIT);
    

                        if(isLoadingLevel && isFeature)
                        
                                    {
                                    featureInterface!.init(level);
    

                                    }
                                
}


    features: Features = Features.getInstance()!;;
    

    graphicsFeatureFactory: GraphicsFeatureFactory = GraphicsFeatureFactory.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.ANIMATION_FEATURES);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.VECTOR_GRAPHICS));
    
stringBuffer!.append(this.IMAGE_LABEL);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.IMAGE_GRAPHICS));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.INIT);
    

                        if(features.isFeature(graphicsFeatureFactory!.IMAGE_GRAPHICS))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.IMAGE_GRAPHICS_ARRAY);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.IMAGE_TO_ARRAY_GRAPHICS));
    
stringBuffer!.append(this.IMAGE_GRAPHICS_ROTATION);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.IMAGE_TO_ARRAY_GRAPHICS));
    
stringBuffer!.append(this.SPRITE_QUARTER);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.SPRITE_QUARTER_ROTATION_GRAPHICS));
    
stringBuffer!.append(this.SPRITE_FULL);
    
stringBuffer!.appendboolean(features.isFeature(graphicsFeatureFactory!.SPRITE_FULL_GRAPHICS));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.INIT);
    

                                    }
                                
}


    public clear(){
this.list.clear();
    
}


    public add(GameFeatureControlledInterface featureInterface){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(StringUtil.getInstance()!.toString(featureInterface))!.toString(), this, this.commonStrings!.ADD);
    
this.list.add(featureInterface);
    
}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

