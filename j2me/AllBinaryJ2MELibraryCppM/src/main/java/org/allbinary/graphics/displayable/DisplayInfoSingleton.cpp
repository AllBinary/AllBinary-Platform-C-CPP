
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

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseScalable.h"
#include "ScalableListener.h"

class DisplayInfoSingleton
            : public Object
         {
        

    private: static const SINGLETON: DisplayInfoSingleton = new DisplayInfoSingleton();

    public static DisplayInfoSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayInfoSingleton.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonLabels: CommonLabels = CommonLabels.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const ORIENTATION: string = "ORIENTATION";

    public const ADJUSTING_FOR_SCALING_IN_PORTRAIT: string = "Adjusting for Scaling in portrait display ratio: ";

    public const ADJUSTING_FOR_SCALING_IN_LANDSCAPE: string = "Adjusting for Scaling in landscape display ratio: ";

    private: last: std::vector<int32_t> = new Array(4);

    private: lastHalf: std::vector<int32_t> = new Array(4);

    private: full: std::vector<int32_t> = new Array(4);

    private: top: int32_t= 0;

    private: left: int32_t= 0;

    private: xOffset: int32_t= 0;

    private: yOffset: int32_t= 0;

    private: scaleLargestTo: float= 0.0;

    public const WIDTH: int32_t = 0;

    public const HEIGHT: int32_t = 1;

    public const CUSTOM_WIDTH: int32_t = 2;

    public const CUSTOM_HEIGHT: int32_t = 3;

    private: scalableListener: BaseScalable = new BaseScalable();

    private: displayRatio: float= 0.0;

    private: ratio: float = 1.0;

private constructor (){

            super();
        
    size: int32_t = this.last.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.last[index]= 0;
    
this.lastHalf[index]= 0;
    
this.full[index]= 0;
    
}


                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    this.scaleLargestTo= 640;
    

                                    }
                                
                        else {
                            this.scaleLargestTo= 1080;
    

                        }
                            
}


    public std::vector<int32_t> getLastHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastHalf;
    
}


    public std::vector<int32_t> getLast(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last;
    
}


    public std::vector<int32_t> getFull(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.full;
    
}


    public float getScaleLargestTo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scaleLargestTo;
    
}


    public setScaleLargestTo(int32_t scaleLargestTo){
this.scaleLargestTo= scaleLargestTo;
    
}


    private: const SET_LAST_SIZE_METHOD_NAME: string = "setLastSize";

    private: const FULL_WIDTH: string = " FullWidth: ";

    private: const FULL_HEIGHT: string = " FullHeight: ";

    private: const LAST_WIDTH: string = "LastWidth: ";

    private: const LAST_HEIGHT: string = " LastHeight: ";

    private: const PORTRAIT: string = "Portrait";

    private: const LANDSCAPE: string = "Landscape";

    public setLastSize(int32_t aLastWidth, int32_t aLastHeight, string reason){

                        if(this.full[this.WIDTH] != aLastWidth || this.full[this.HEIGHT] != aLastHeight)
                        
                                    {
                                    this.setLastSizeForce(aLastWidth, aLastHeight, reason);
    

                                    }
                                
}


    setLastSizeForce(int32_t aLastWidth, int32_t aLastHeight, string reason){

    stringMaker: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringMaker!.append(CommonLabels.getInstance()!.START_LABEL)!.append(reason)!.toString(), this, this.SET_LAST_SIZE_METHOD_NAME);
    

    aFullWidth: int32_t = aLastWidth;;
    

    aFullHeight: int32_t = aLastHeight;;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.FULL_WIDTH)!.appendint(aFullWidth)!.append(this.FULL_HEIGHT)!.appendint(aFullHeight)!.append(this.toString())!.toString(), this, this.SET_LAST_SIZE_METHOD_NAME);
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

                        if(operatingSystemInterface!.isOverScan())
                        
                                    {
                                    aLastWidth= aLastWidth *operatingSystemInterface!.getOverScanXPercent() /100;
    
aLastHeight= aLastHeight *operatingSystemInterface!.getOverScanYPercent() /100;
    

                                    }
                                

                        if(operatingSystemInterface!.isScalable())
                        
                                    {
                                    
                        if(this.isPortraitWH(aLastWidth, aLastHeight))
                        
                                    {
                                    
                        if(aLastHeight > this.scaleLargestTo)
                        
                                    {
                                    this.displayRatio= this.scaleLargestTo /aLastHeight;
    
this.ratio= aLastHeight /this.scaleLargestTo;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.ADJUSTING_FOR_SCALING_IN_PORTRAIT)!.appendfloat(this.displayRatio)!.toString(), this, this.SET_LAST_SIZE_METHOD_NAME);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this.displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this.displayRatio));
    
this.scalableListener!.scale(this.ratio);
    

                                    }
                                
                        else {
                            this.ratio= 1.0;
    
this.scalableListener!.scale(this.ratio);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(aLastWidth > this.scaleLargestTo)
                        
                                    {
                                    this.displayRatio= this.scaleLargestTo /aLastWidth;
    
this.ratio= aLastWidth /this.scaleLargestTo;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.ADJUSTING_FOR_SCALING_IN_LANDSCAPE)!.appendfloat(this.displayRatio)!.toString(), this, this.SET_LAST_SIZE_METHOD_NAME);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this.displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this.displayRatio));
    
this.scalableListener!.scale(this.ratio);
    

                                    }
                                
                        else {
                            this.ratio= 1.0;
    
this.scalableListener!.scale(this.ratio);
    

                        }
                            

                        }
                            

                                    }
                                
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.LAST_WIDTH)!.appendint(aLastWidth)!.append(this.LAST_HEIGHT)!.appendint(aLastHeight)!.toString(), this, this.SET_LAST_SIZE_METHOD_NAME);
    
this.xOffset= aFullWidth -aLastWidth;
    
this.yOffset= aFullHeight -aLastHeight;
    
this.left= this.scalableListener!.getLeft(this.xOffset);
    
this.top= this.scalableListener!.getTop(this.yOffset);
    
this.full[this.WIDTH]= aFullWidth;
    
this.full[this.HEIGHT]= aFullHeight;
    
this.last[this.WIDTH]= aLastWidth;
    
this.lastHalf[this.WIDTH]= (this.last[this.WIDTH]>>1);
    
this.last[this.HEIGHT]= aLastHeight;
    
this.lastHalf[this.HEIGHT]= (this.last[this.HEIGHT]>>1);
    
SWTJOGLProcessor.getInstance()!.setCustom(aLastWidth, aLastHeight, this.ratio);
    
this.add(this.SET_LAST_SIZE_METHOD_NAME);
    
}


    public bool isPortraitWH(int32_t lastWidth, int32_t lastHeight){

                        if(lastHeight > lastWidth)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public bool isPortrait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isPortraitWH(this.last[this.WIDTH]!, this.last[this.HEIGHT]!);;
    
}


    public const displayChangeEvent: DisplayChangeEvent = new DisplayChangeEvent(this);

    private: const FIRE_METHOD_NAME: string = "fire";

    private: const REASON: string = "reason: ";

    private: const UPDATE_FROM_ORIENTATION_CHANGE: string = "Updating from Orientation Change ";

    private: const list: BasicArrayList = new BasicArrayListD();

    public add(string reason){

    stringMaker: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringMaker!.append(this.REASON)!.append(reason)!.toString(), this, this.FIRE_METHOD_NAME);
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(this.toStringAppend(stringMaker), this, this.FIRE_METHOD_NAME);
    
this.list.add(reason);
    
}


    public process(){

        try {
            
                        if(this.list.size() > 0)
                        
                                    {
                                    this.processForced();
    

                                    }
                                
this.list.clear();
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, this.FIRE_METHOD_NAME, e);
    
}

}


    public processForced(){

        try {
            
    swtJOGLProcessor: SWTJOGLProcessor = SWTJOGLProcessor.getInstance()!;;
    
swtJOGLProcessor!.clear();
    
DisplayChangeEventHandler.getInstance()!.fireEvent(this.displayChangeEvent);
    
LastDisplayChangeEventHandler.getInstance()!.fireEvent(this.displayChangeEvent);
    
swtJOGLProcessor!.onSurfaceChanged();
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, this.FIRE_METHOD_NAME, e);
    
}

}


    public update(Displayable displayable, string reason){

    aLastWidth: int32_t = displayable.getWidth()!;;
    

    aLastHeight: int32_t = displayable.getHeight()!;;
    

    aFullWidth: int32_t = aLastWidth;;
    

    aFullHeight: int32_t = aLastHeight;;
    

    stringMaker: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringMaker!.append(CommonLabels.getInstance()!.START_LABEL)!.append(reason)!.append(this.LAST_WIDTH)!.appendint(aLastWidth)!.append(this.LAST_HEIGHT)!.appendint(aLastHeight)!.append(this.commonSeps!.SPACE)!.append(this.toString())!.toString(), this, this.commonStrings!.UPDATE);
    

                        if(aLastWidth > 0 && aLastHeight > 0)
                        
                                    {
                                    
    features: Features = Features.getInstance()!;;
    

    openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;;
    

                        if(!features.isDefault(openGLFeatureFactory!.OPENGL) || this.last[this.WIDTH] != aLastWidth || this.last[this.HEIGHT] != aLastHeight)
                        
                                    {
                                    stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.UPDATE_FROM_ORIENTATION_CHANGE)!.toString(), this, this.commonStrings!.UPDATE);
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

                        if(operatingSystemInterface!.isOverScan())
                        
                                    {
                                    aLastWidth= aLastWidth *operatingSystemInterface!.getOverScanXPercent() /100;
    
aLastHeight= aLastHeight *operatingSystemInterface!.getOverScanYPercent() /100;
    

                                    }
                                

                        if(operatingSystemInterface!.isScalable())
                        
                                    {
                                    
                        if(this.isPortraitWH(aLastWidth, aLastHeight))
                        
                                    {
                                    
                        if(aLastHeight > this.scaleLargestTo)
                        
                                    {
                                    this.displayRatio= this.scaleLargestTo /aLastHeight;
    
this.ratio= aLastHeight /this.scaleLargestTo;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.ADJUSTING_FOR_SCALING_IN_PORTRAIT)!.appendfloat(this.displayRatio)!.toString(), this, this.commonStrings!.UPDATE);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this.displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this.displayRatio));
    
this.scalableListener!.scale(this.ratio);
    

                                    }
                                
                        else {
                            this.ratio= 1.0;
    
this.scalableListener!.scale(this.ratio);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(aLastWidth > this.scaleLargestTo)
                        
                                    {
                                    this.displayRatio= this.scaleLargestTo /aLastWidth;
    
this.ratio= aLastWidth /this.scaleLargestTo;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.ADJUSTING_FOR_SCALING_IN_LANDSCAPE)!.appendfloat(this.displayRatio)!.toString(), this, this.commonStrings!.UPDATE);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this.displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this.displayRatio));
    
this.scalableListener!.scale(this.ratio);
    

                                    }
                                
                        else {
                            this.ratio= 1.0;
    
this.scalableListener!.scale(this.ratio);
    

                        }
                            

                        }
                            

                                    }
                                
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.UPDATE_FROM_ORIENTATION_CHANGE)!.append(this.LAST_WIDTH)!.appendint(aLastWidth)!.append(this.LAST_HEIGHT)!.appendint(aLastHeight)!.toString(), this, this.commonStrings!.UPDATE);
    
this.xOffset= aFullWidth -aLastWidth;
    
this.yOffset= aFullHeight -aLastHeight;
    
this.left= this.scalableListener!.getLeft(this.xOffset);
    
this.top= this.scalableListener!.getTop(this.yOffset);
    
this.full[this.WIDTH]= aFullWidth;
    
this.full[this.HEIGHT]= aFullHeight;
    
this.last[this.WIDTH]= aLastWidth;
    
this.lastHalf[this.WIDTH]= (this.last[this.WIDTH]>>1);
    
this.last[this.HEIGHT]= aLastHeight;
    
this.lastHalf[this.HEIGHT]= (this.last[this.HEIGHT]>>1);
    
SWTJOGLProcessor.getInstance()!.setCustom(aLastWidth, aLastHeight, this.ratio);
    
this.add(this.commonStrings!.UPDATE);
    

                                    }
                                

                                    }
                                
}


    private: const DISPLAY_INFO: string = "Display Info: ";

    private: const FULL: string = "full";

    private: const LAST: string = "last";

    private: const LAST_HALF: string = "lastHalf";

    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toStringAppend(stringBuffer);;
    
}


    public string toStringAppend(StringMaker stringBuffer){
stringBuffer!.append(this.DISPLAY_INFO);
    
stringBuffer!.append(this.FULL);
    
stringBuffer!.append(this.commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(this.full[this.WIDTH]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.FULL);
    
stringBuffer!.append(this.commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(this.full[this.HEIGHT]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.LAST);
    
stringBuffer!.append(this.commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(this.last[this.WIDTH]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.LAST);
    
stringBuffer!.append(this.commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(this.last[this.HEIGHT]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.LAST_HALF);
    
stringBuffer!.append(this.commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(this.lastHalf[this.WIDTH]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.LAST_HALF);
    
stringBuffer!.append(this.commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(this.lastHalf[this.HEIGHT]!);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.isPortrait()
                        ?       
                                this.PORTRAIT
                                :

                            this.LANDSCAPE;

    );
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public int32_t getTop(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.top;
    
}


    public int32_t getLeft(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.left;
    
}


    public int32_t getLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.WIDTH]!;
    
}


    public int32_t getLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.HEIGHT]!;
    
}


    public int32_t getLastHalfWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastHalf[this.WIDTH]!;
    
}


    public int32_t getLastHalfHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastHalf[this.HEIGHT]!;
    
}


    public int32_t getCustomLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.CUSTOM_WIDTH]!;
    
}


    public int32_t getCustomLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.CUSTOM_HEIGHT]!;
    
}


    public int32_t getRawLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.WIDTH]!;
    
}


    public int32_t getRawLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.last[this.HEIGHT]!;
    
}


    public setCustom(int32_t width, int32_t height){
this.last[this.CUSTOM_WIDTH]= width;
    
this.lastHalf[this.CUSTOM_WIDTH]= (this.last[this.CUSTOM_WIDTH]>>1);
    
this.last[this.CUSTOM_HEIGHT]= height;
    
this.lastHalf[this.CUSTOM_HEIGHT]= (this.last[this.CUSTOM_HEIGHT]>>1);
    
}


    public setScalableListener(BaseScalable scalableListener){
this.scalableListener= scalableListener;
    
}


    public ScalableListener getScalableListener(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scalableListener;
    
}


    public float getRatio(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ratio;
    
}


    public float getDisplayRatio(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.displayRatio;
    
}


    public setOffset(int32_t left, int32_t top){
this.left= left;
    
}


    public int32_t getxOffset(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.xOffset;
    
}


    public int32_t getyOffset(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.yOffset;
    
}


};

            

