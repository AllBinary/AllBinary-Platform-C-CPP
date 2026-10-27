
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGER_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class TsUtil;
class LogUtil;
class CommonStrings;
class SynchObject;
class BasicArrayList;
class BasicArrayListD;
class ABSystemWrapper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LayerManagerLoggingBase;
class AllBinaryLayer;
class Layer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManager
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ABSystemWrapper* systemWrapper;

    private: TsUtil* tsUtil;

    private: LayerManagerLoggingBase* layerManagerLogging;

    private: BasicArrayList* list;

    private: SynchObject* anyType;

public: LayerManager(LayerManagerLoggingBase* layerManagerLogging);

    public: bool contains(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void insert(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    public: void remove(AllBinaryLayer* layerInterface);

    public: Layer* getLayerAt(int32_t index);

    public: int32_t getSize();

                //@Throws(Exception.constructor)
            
    public: void cleanup();

    public: void paint(Graphics* g, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYERMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYERMANAGER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/SynchObject.h>)
#include <org/allbinary/thread/SynchObject.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif
#if __has_include("org/allbinary/layer/LayerManagerLoggingBase.h")
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/Layer.h")
#include "org/allbinary/layer/Layer.h"
#endif

        #endif
    
