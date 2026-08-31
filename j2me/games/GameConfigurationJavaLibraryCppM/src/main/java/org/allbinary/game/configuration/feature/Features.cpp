
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Feature.h"
#include "GameFeatureFactory.h"
#include "InputFeatureFactory.h"
#include "SensorFeatureFactory.h"
#include "TouchFeatureFactory.h"
#include "MainFeatureFactory.h"

class Features
            : public Object
         {
        

    private: static SINGLETON: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static Features getInstance(){

                        if(Features.SINGLETON == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    Features.SINGLETON= new Features();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Features.SINGLETON as Features;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const list: BasicArrayList;

    private: const defaultList: BasicArrayList;

private constructor (){

            super();
        this.list= new BasicArrayListD();
    
this.defaultList= new BasicArrayListD();
    
this.init();
    
}


                //@Throws(Exception.constructor)
            
    public addDefault(Feature gameFeature){
this.add(gameFeature);
    

                        if(!this.defaultList!.contains(gameFeature))
                        
                                    {
                                    this.defaultList!.add(gameFeature);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public add(Feature gameFeature){

                        if(!this.list.contains(gameFeature))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(gameFeature!.toString())!.toString(), this, this.commonStrings!.ADD);
    
this.list.add(gameFeature);
    
GameFeatureEventHandler.getInstance()!.fireEvent(new GameFeatureEvent(gameFeature, gameFeature!.toString()));
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public removeDefault(Feature gameFeature){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(gameFeature!.toString())!.toString(), this, "removeDefault");
    
this.remove(gameFeature);
    
this.defaultList!.remove(gameFeature);
    
}


                //@Throws(Exception.constructor)
            
    public remove(Feature gameFeature){

                        if(this.list.contains(gameFeature))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.REMOVE);
    
this.list.remove(gameFeature);
    
GameFeatureEventHandler.getInstance()!.fireEvent(new GameFeatureEvent(gameFeature, gameFeature!.toString()));
    

                                    }
                                
}


    init(){

        try {
            
    gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;;
    

    inputFeatureFactory: InputFeatureFactory = InputFeatureFactory.getInstance()!;;
    

    sensorFeatureFactory: SensorFeatureFactory = SensorFeatureFactory.getInstance()!;;
    

    touchFeatureFactory: TouchFeatureFactory = TouchFeatureFactory.getInstance()!;;
    
this.addDefault(gameFeatureFactory!.ARTIFICIAL_INTELLEGENCE_PROCESSOR);
    
this.addDefault(gameFeatureFactory!.COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
    
this.addDefault(gameFeatureFactory!.GAME_INPUT_LAYER_PROCESSOR);
    
this.addDefault(gameFeatureFactory!.TICKABLE_LAYER_PROCESSOR);
    
this.addDefault(inputFeatureFactory!.MULTI_KEY_PRESS);
    
this.addDefault(inputFeatureFactory!.REMOVE_DUPLICATE_KEY_PRESSES);
    
this.addDefault(gameFeatureFactory!.SCREEN_SHAKE);
    
this.addDefault(gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION);
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

                        if(operatingSystemInterface!.isOverScan())
                        
                                    {
                                    this.addDefault(sensorFeatureFactory!.NO_ORIENTATION);
    
this.addDefault(touchFeatureFactory!.HIDE_SCREEN_BUTTONS);
    

                                    }
                                
                        else {
                            this.addDefault(sensorFeatureFactory!.ORIENTATION_SENSORS);
    
this.addDefault(touchFeatureFactory!.AUTO_HIDE_SHOW_SCREEN_BUTTONS);
    

                        }
                            
this.addDefault(touchFeatureFactory!.TOUCH_ENABLED);
    
this.addDefault(MainFeatureFactory.getInstance()!.FULL_SCREEN);
    
this.addDefault(MainFeatureFactory.getInstance()!.LOAD_ONDEMAND);
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    
}

}


    public bool isDefault(Feature gameFeature){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultList!.contains(gameFeature);;
    
}


    public bool isFeature(Feature gameFeature){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.contains(gameFeature);;
    
}


                //@Throws(Exception.constructor)
            
    public toggle(Feature gameFeature){

                        if(this.isFeature(gameFeature))
                        
                                    {
                                    this.remove(gameFeature);
    

                                    }
                                
                        else {
                            this.add(gameFeature);
    

                        }
                            
}


};

            

