
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
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeature.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameGraphicsResourceUtil
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameGraphicsResourceUtil getInstance(){

                        if(GameGraphicsResourceUtil.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameGraphicsResourceUtil.instance= new GameGraphicsResourceUtil();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil.instance as GameGraphicsResourceUtil;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const SPRITE: string = "_sprite";

    public const QUARTER: string = "_quarter";

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (){

            super();
        
        try {
            this.name= this.getString();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR, e);
    
}

}


                //@Throws(Exception.constructor)
            
    string getString(){

    graphicsFeatureFactory: GraphicsFeatureFactory = GraphicsFeatureFactory.getInstance()!;;
    

    graphicsFeature: GraphicsFeature = graphicsFeatureFactory!.NONE;;
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(graphicsFeatureFactory!.IMAGE_TO_ARRAY_GRAPHICS))
                        
                                    {
                                    graphicsFeature= graphicsFeatureFactory!.IMAGE_TO_ARRAY_GRAPHICS;
    

                                    }
                                
                             else 
                        if(features.isFeature(graphicsFeatureFactory!.SPRITE_FULL_GRAPHICS))
                        
                                    {
                                    graphicsFeature= graphicsFeatureFactory!.SPRITE_FULL_GRAPHICS;
    

                                    }
                                
                             else 
                        if(features.isFeature(graphicsFeatureFactory!.SPRITE_QUARTER_ROTATION_GRAPHICS))
                        
                                    {
                                    graphicsFeature= graphicsFeatureFactory!.SPRITE_QUARTER_ROTATION_GRAPHICS;
    

                                    }
                                
                             else 
                        if(features.isFeature(graphicsFeatureFactory!.IMAGE_ROTATION_ON_THE_FLY))
                        
                                    {
                                    graphicsFeature= graphicsFeatureFactory!.IMAGE_ROTATION_ON_THE_FLY;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getStringForFeature(graphicsFeature);;
    
}


                //@Throws(Exception.constructor)
            
    public string getStringForFeature(GraphicsFeature graphicsFeature){

    stringBuffer: StringMaker = new StringMaker();;
    

    graphicsFeatureFactory: GraphicsFeatureFactory = GraphicsFeatureFactory.getInstance()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(graphicsFeatureFactory!.VECTOR_GRAPHICS))
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(features.isFeature(graphicsFeatureFactory!.IMAGE_GRAPHICS))
                        
                                    {
                                    
                        if(graphicsFeature == graphicsFeatureFactory!.IMAGE_TO_ARRAY_GRAPHICS || graphicsFeature == graphicsFeatureFactory!.IMAGE_ROTATION_ON_THE_FLY)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(graphicsFeature == graphicsFeatureFactory!.SPRITE_FULL_GRAPHICS)
                        
                                    {
                                    stringBuffer!.append(this.SPRITE);
    

                                    }
                                
                             else 
                        if(graphicsFeature == graphicsFeatureFactory!.SPRITE_QUARTER_ROTATION_GRAPHICS)
                        
                                    {
                                    stringBuffer!.append(this.QUARTER);
    
stringBuffer!.append(this.SPRITE);
    

                                    }
                                
                        else {
                            


                            throw new Exception("None/Unknown Sub Image Resource Type Specified");
                    

                        }
                            

                                    }
                                
                             else 
                        if(OpenGLFeatureUtil.getInstance()!.isAnyThreed())
                        
                                    {
                                    stringBuffer!.append(CanvasStrings.getInstance()!.OBJ_MODEL);
    

                                    }
                                
                        else {
                            


                            throw new Exception("None/Unknown Main Image Resource Type Specified");
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

