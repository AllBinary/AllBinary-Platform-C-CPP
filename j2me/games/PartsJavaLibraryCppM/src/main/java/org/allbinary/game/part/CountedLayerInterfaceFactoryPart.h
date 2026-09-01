
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H
        #define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H

            #include <vector>
        
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

    public: static const CountedLayerInterfaceFactoryPart NULL_COUNTED_LAYER_INTERFACE_FACTORY = CountedLayerInterfaceFactoryPart(0, CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY);

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    private: Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);

    private: int32_t total= 0;

    private: std::vector<char> totalString = NullUtil::getInstance().NULL_CHAR_ARRAY;

    private: int32_t xOffset= 0;

    private: CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

    private: PrimitiveLongUtil primitiveLongUtil;

public: CountedLayerInterfaceFactoryPart(int32_t total, CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory);

    public: void updateMeasurement(Graphics graphics);

    private: void init(int32_t total, CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory);

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer getInstance(Hashtable<any, any> hashtable, int32_t x, int32_t y, int32_t z);

    public: int32_t getTotal();

    public: void setTotal(int32_t total);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

    public: Animation getAnimationInterface();

    public: void setAnimationInterface(Animation animationInterface);

    public: int32_t getXOffset();

    private: void setXOffset(int32_t totalStringWidth);

    public: std::vector<char> getTotalString();

    public: CountedPickedUpLayerInterfaceFactory getCountedPickedUpLayerInterfaceFactory();

    public: void setCountedPickedUpLayerInterfaceFactory(CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H
