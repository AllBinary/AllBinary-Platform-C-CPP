
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/resource/FeaturedResourceFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "AnimationInterfaceFactoryInterface.h"
#include "BasicAnimationInterfaceFactoryInterface.h"
#include "NullAnimationFactory.h"

class FeaturedAnimationInterfaceFactoryInterfaceFactory: public FeaturedResourceFactory {
        

    private: static INSTANCE: FeaturedAnimationInterfaceFactoryInterfaceFactory = new FeaturedAnimationInterfaceFactoryInterfaceFactory();

    public static FeaturedAnimationInterfaceFactoryInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedAnimationInterfaceFactoryInterfaceFactory.INSTANCE;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public Rectangle getRectangle(string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRectangleXY(resource, 0, 0);;
    
}


                //@Throws(Exception.constructor)
            
    public Rectangle getRectangleXY(string resource, int32_t x, int32_t y){

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    list: BasicArrayList = this.getList()!;;
    

    scale: int32_t = GameConfigurationCentral.getInstance()!.SCALE.getValue()!.intValue()!;;
    

    size: int32_t = this.getList()!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    featureInterface: FeatureResourceAnimationInterfaceFactoryInterface = list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;;
    

                        if(featureInterface!.isFeature())
                        
                                    {
                                    
    rectangle: Rectangle = featureInterface!.getRectangle(resource)!;;
    

                        if(rectangle != RectangleFactory.SINGLETON)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Rectangle(pointFactory!.createXY(x, y), ((rectangle.getWidth() *scale)>>1), ((rectangle.getHeight() *scale)>>1));
    

                                    }
                                

                                    }
                                
}




                            throw new Exception(new StringMaker().append("No rectangle available for current feature selection or Resource: ")!.append(resource)!.toString());
                    
}


                //@Throws(Exception.constructor)
            
    public ProceduralAnimationInterfaceFactoryInterface getProcedural(string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBasicAnimationInterfaceFactoryInstance(resource) as ProceduralAnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public AnimationInterfaceFactoryInterface get(string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBasicAnimationInterfaceFactoryInstance(resource) as AnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(string resource){

    list: BasicArrayList = this.getList()!;;
    

    resourceTypeAvailableList: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = this.getList()!.size()!;;
    

    featureInterface: FeatureResourceAnimationInterfaceFactoryInterface;;
    

    animationInterfaceFactoryInterface: BasicAnimationInterfaceFactoryInterface;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    

                        if(featureInterface!.isFeature())
                        
                                    {
                                    resourceTypeAvailableList!.add(featureInterface);
    
animationInterfaceFactoryInterface= featureInterface!.getBasicAnimationInterfaceFactoryInstance(resource);
    

                        if(animationInterfaceFactoryInterface != NullAnimationFactory.NULL_NOT_FOR_USE_ANIMATION_FACTORY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return animationInterfaceFactoryInterface;
    

                                    }
                                

                                    }
                                
}


                        if(resourceTypeAvailableList!.size() > 0)
                        
                                    {
                                    
    NO_ANIMATION_AVAILABLE_FROM: string = "No animation available from: ";;
    

    FOR_FACTORIES: string = " factories: ";;
    

    FOR_RESOURCE: string = " for Resource: ";;
    

    HAS_KEY: string = " has: ";;
    

    RESOURCES_LABEL: string = " resources ";;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(NO_ANIMATION_AVAILABLE_FROM);
    
stringBuffer!.appendint(resourceTypeAvailableList!.size());
    
stringBuffer!.append(CommonSeps.getInstance()!.FORWARD_SLASH);
    
stringBuffer!.appendint(size);
    
stringBuffer!.append(FOR_FACTORIES);
    

    size2: int32_t = resourceTypeAvailableList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
stringBuffer!.append(resourceTypeAvailableList!.get(index)!.toString());
    
stringBuffer!.append(CommonSeps.getInstance()!.COMMA_SEP);
    
}

stringBuffer!.append(FOR_RESOURCE);
    
stringBuffer!.append(resource);
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    

                        if(featureInterface!.isFeature())
                        
                                    {
                                    stringBuffer!.append(StringUtil.getInstance()!.toString(featureInterface));
    
stringBuffer!.append(HAS_KEY);
    
stringBuffer!.appendint(featureInterface!.getHashtable()!.size());
    
stringBuffer!.append(RESOURCES_LABEL);
    

                                    }
                                
}




                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                
                        else {
                            
    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    
stringBuffer!.append(featureInterface!.toString());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
}


    result: string = stringBuffer!.toString()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    



                            throw new Exception(stringBuffer!.append("No feature resource type available for Resource: ")!.append(resource)!.append(" Resource Factories Available: ")!.append(result)!.toString());
                    

                        }
                            
}


};

            

