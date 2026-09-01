
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGER_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGER_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerLoggingBase.h"
#include "AllBinaryLayer.h"
#include "Layer.h"

class LayerManager
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: LayerManagerLoggingBase layerManagerLogging;

    private: const BasicArrayList list = BasicArrayListD();

    private: const SynchObject anyType = SynchObject();

public: LayerManager(LayerManagerLoggingBase layerManagerLogging);

    public: bool contains(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public: void insert(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    public: void remove(AllBinaryLayer layerInterface);

    public: Layer getLayerAt(int32_t index);

    public: int32_t getSize();

                //@Throws(Exception.constructor)
            
    public: void cleanup();

    public: void paint(Graphics g, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGER_H
