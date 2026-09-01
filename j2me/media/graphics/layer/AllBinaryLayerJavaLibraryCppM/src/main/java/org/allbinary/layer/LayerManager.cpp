
        /* Generated Code Do Not Modify */
        



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

public: LayerManager(LayerManagerLoggingBase layerManagerLogging){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->layerManagerLogging= layerManagerLogging;
    
}


    public: bool contains(AllBinaryLayer layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.contains(layerInterface);;
    
}


                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryLayer layerInterface){

    bool had = this->list.remove(layerInterface);;
    

                        if(had)
                        
                                    {
                                    
    AllBinaryLayer nextLayerInterface;;
    

    int32_t size = this->list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= this->list.get(index) as AllBinaryLayer;
    

                        if(layerInterface.getZP() > nextLayerInterface.getZP())
                        
                                    {
                                    this->list.addAt(index, layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this->list.add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void insert(AllBinaryLayer layerInterface){

    AllBinaryLayer nextLayerInterface;;
    

    int32_t size = this->list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= this->list.get(index) as AllBinaryLayer;
    

                        if(layerInterface.getZP() > nextLayerInterface.getZP())
                        
                                    {
                                    this->appendAt(layerInterface, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this->append(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer layerInterface){
this->layerManagerLogging.append(layerInterface);
    
this->list.add(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer layerInterface, int32_t index){
this->layerManagerLogging.appendAt(layerInterface, index);
    
this->list.addAt(index, layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(AllBinaryLayer layerInterface){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->layerManagerLogging.remove(layerInterface);
    

    bool result = this->list.remove(layerInterface);;
    
this->layerManagerLogging.removeResult(this, layerInterface, result);
    


}


    public: Layer getLayerAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.objectArray[index]! as Layer;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.size();;
    
}


                //@Throws(Exception.constructor)
            
    public: void cleanup(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list.clear();
    
this->layerManagerLogging.clear();
    
System.gc();
    
System.gc();
    


}


    public: void paint(Graphics g, int32_t x, int32_t y){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        

    Layer comp;;
    




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {
comp= this->list.objectArray[index]! as Layer;
    

                        if(comp != 
                                    nullptr
                                 && comp.isVisible())
                        
                                    {
                                    comp.paint(g);
    

                                    }
                                
}



}


};

            

