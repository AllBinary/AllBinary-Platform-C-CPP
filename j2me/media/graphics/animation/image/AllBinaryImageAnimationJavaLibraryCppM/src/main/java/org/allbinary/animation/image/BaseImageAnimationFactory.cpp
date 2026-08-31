
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

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationFactoryInitializationVisitor.h"

class BaseImageAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public static BaseImageAnimationFactory createFactoryBase(Image image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BaseImageAnimationFactory(image, sequenceArray, width, height, 0, 0, animationBehaviorFactory);
    
}


    const animationFactoryImageScaleUtil: AnimationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil.getInstance()!;

    private: const image: Image;

    public const animationBehaviorFactory: AnimationBehaviorFactory;

    private: const sequenceArray: std::vector<int32_t>;

    const animationFactoryInitializationVisitor: AnimationFactoryInitializationVisitor;

    scaleProperties: ScaleProperties = ScaleProperties.instance;

public constructor (Image image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory){

            super();
        this.animationFactoryInitializationVisitor= new AnimationFactoryInitializationVisitor();
    
this.image= image;
    
this.animationFactoryInitializationVisitor!.width= width;
    
this.animationFactoryInitializationVisitor!.height= height;
    
this.animationBehaviorFactory= animationBehaviorFactory;
    
this.sequenceArray= sequenceArray;
    
this.animationFactoryInitializationVisitor!.dx= dx;
    
this.animationFactoryInitializationVisitor!.dy= dy;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory.getFactoryInstance()!.getInstance(instanceId);;
    
}


    public Image getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.image;
    
}


    public std::vector<int32_t> getSequenceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sequenceArray;
    
}


    public setInitialScale(ScaleProperties scaleProperties){
this.scaleProperties= scaleProperties;
    

                        if(this.scaleProperties!.shouldScale)
                        
                                    {
                                    this.scaleProperties!.scaleWidth= static_cast<int32_t>((this.animationFactoryInitializationVisitor!.width *this.scaleProperties!.scaleX));
    
this.scaleProperties!.scaleHeight= static_cast<int32_t>((this.animationFactoryInitializationVisitor!.height *this.scaleProperties!.scaleY));
    

                                    }
                                
                        else {
                            
                        }
                            
}


    public AnimationFactoryInitializationVisitor getAnimationFactoryInitializationVisitorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationFactoryInitializationVisitor;
    
}


    public ScaleProperties getScalePropertiesP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scaleProperties;
    
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(this.image.getHeight());
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(this.animationFactoryInitializationVisitor!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

