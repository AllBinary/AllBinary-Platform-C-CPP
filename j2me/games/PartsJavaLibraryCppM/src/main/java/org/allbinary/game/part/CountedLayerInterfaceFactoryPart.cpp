
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
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PartInterface.h"

class CountedLayerInterfaceFactoryPart
            : public Object
        : public PartInterface, public UpdateMyFontInterface {
        

    public static const NULL_COUNTED_LAYER_INTERFACE_FACTORY: CountedLayerInterfaceFactoryPart = new CountedLayerInterfaceFactoryPart(0, CountedPickedUpLayerInterfaceFactory.NULL_COUNTED_PICKUP_LAYER_FACTORY);

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: total: int32_t= 0;

    private: totalString: std::vector<char> = NullUtil.getInstance()!.NULL_CHAR_ARRAY;

    private: xOffset: int32_t= 0;

    private: countedPickedUpLayerInterfaceFactory: CountedPickedUpLayerInterfaceFactory = CountedPickedUpLayerInterfaceFactory.NULL_COUNTED_PICKUP_LAYER_FACTORY;

    private: const primitiveLongUtil: PrimitiveLongUtil;

public constructor (int32_t total, CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory){

            super();
        this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(1000);
    
this.init(total, countedPickedUpLayerInterfaceFactory);
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.setXOffset(font.charsWidth(this.totalString, 0, this.primitiveLongUtil!.getCurrentTotalDigits()) +(font.getSize()>>1));
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    init(int32_t total, CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory){
this.setCountedPickedUpLayerInterfaceFactory(countedPickedUpLayerInterfaceFactory);
    
this.total= total;
    
}


                //@Throws(Exception.constructor)
            
    public AllBinaryLayer getInstance(Hashtable<any, any> hashtable, int32_t x, int32_t y, int32_t z){

                        if(this.total > 0)
                        
                                    {
                                    this.setTotal(this.total -1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getCountedPickedUpLayerInterfaceFactory()!.getNextInstance(hashtable, x, y, z);;
    

                                    }
                                
                        else {
                            


                            throw new Exception("No more left. Could use a listener to automatically remove");
                    

                        }
                            
}


    public int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.total;
    
}


    public setTotal(int32_t total){
this.total= total;
    
this.totalString= this.primitiveLongUtil!.getCharArray(total);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
}


    public paintThreed(Graphics graphics){
}


    public Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterface;
    
}


    public setAnimationInterface(Animation animationInterface){
this.animationInterface= animationInterface;
    
}


    public int32_t getXOffset(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.xOffset;
    
}


    setXOffset(int32_t totalStringWidth){
this.xOffset= totalStringWidth;
    
}


    public std::vector<char> getTotalString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalString;
    
}


    public CountedPickedUpLayerInterfaceFactory getCountedPickedUpLayerInterfaceFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.countedPickedUpLayerInterfaceFactory;
    
}


    public setCountedPickedUpLayerInterfaceFactory(CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory){
this.countedPickedUpLayerInterfaceFactory= countedPickedUpLayerInterfaceFactory;
    
}


};

            

