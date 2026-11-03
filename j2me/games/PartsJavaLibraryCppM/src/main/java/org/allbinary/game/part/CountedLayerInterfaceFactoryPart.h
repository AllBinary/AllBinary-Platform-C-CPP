
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class Animation;
class NullAnimationFactory;
class CountedPickedUpLayerInterfaceFactory;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class AllBinaryLayer;
class NullUtil;
class PrimitiveLongUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/PartInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CountedLayerInterfaceFactoryPart
            : public virtual Object
        , public virtual PartInterface, public virtual UpdateMyFontInterface {

    private: static CountedLayerInterfaceFactoryPart* NULL_COUNTED_LAYER_INTERFACE_FACTORY_owner();
    public: static CountedLayerInterfaceFactoryPart* NULL_COUNTED_LAYER_INTERFACE_FACTORY;

    private: MyFontProcessor* updateMyFontProcessor;

    private: MyFontProcessor* myFontProcessor;

    private: Animation* animationInterface;

    private: int32_t total= 0;

    private: std::vector<char> totalString;

    private: int32_t xOffset= 0;

    private: CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory;

    private: PrimitiveLongUtil* primitiveLongUtil;

public: CountedLayerInterfaceFactoryPart(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

    public: void updateMeasurement(Graphics* graphics);

    private: void init(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z);

    public: int32_t getTotal();

    public: void setTotal(int32_t total);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: Animation* getAnimationInterface();

    public: void setAnimationInterface(Animation* animationInterface);

    public: int32_t getXOffset();

    private: void setXOffset(int32_t totalStringWidth);

    public: std::vector<char> getTotalString();

    public: CountedPickedUpLayerInterfaceFactory* getCountedPickedUpLayerInterfaceFactory();

    public: void setCountedPickedUpLayerInterfaceFactory(CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>)
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/part/PartInterface.h")
#include "org/allbinary/game/part/PartInterface.h"
#endif

        #endif
    
