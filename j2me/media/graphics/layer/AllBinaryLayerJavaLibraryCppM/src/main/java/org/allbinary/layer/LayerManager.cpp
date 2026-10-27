
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/Layer.h"

class LayerManager
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ABSystemWrapper* systemWrapper = ABSystemWrapper::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: LayerManagerLoggingBase* layerManagerLogging;

    private: BasicArrayList* list = new BasicArrayListD();

    private: SynchObject* anyType = new SynchObject();

public: LayerManager(LayerManagerLoggingBase* layerManagerLogging){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->layerManagerLogging= layerManagerLogging;
    
}


    public: bool contains(AllBinaryLayer* layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->contains(layerInterface);;
    
}


                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryLayer* layerInterface){

    bool had = this->list->remove(layerInterface);;
    

                        if(had)
                        
                                    {
                                    
    AllBinaryLayer* nextLayerInterface;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= dynamic_cast<AllBinaryLayer*>(this->list->get(index));
    

                        if(layerInterface->getZP() > nextLayerInterface->getZP())
                        
                                    {
                                    this->list->addAt(index, layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this->list->add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void insert(AllBinaryLayer* layerInterface){

    AllBinaryLayer* nextLayerInterface;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= dynamic_cast<AllBinaryLayer*>(this->list->get(index));
    

                        if(layerInterface->getZP() > nextLayerInterface->getZP())
                        
                                    {
                                    this->appendAt(layerInterface, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this->append(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface){
this->layerManagerLogging->append(layerInterface);
    
this->list->add(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index){
this->layerManagerLogging->appendAt(layerInterface, index);
    
this->list->addAt(index, layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(AllBinaryLayer* layerInterface){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->layerManagerLogging->remove(layerInterface);
    

    bool result = this->list->remove(layerInterface);;
    
this->layerManagerLogging->removeResult(this, layerInterface, result);
    


}


    public: Layer* getLayerAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Layer*>(this->list->objectArray[index]);
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->size();;
    
}


                //@Throws(Exception.constructor)
            
    public: void cleanup(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list->clear();
    
this->layerManagerLogging->clear();
    
this->tsUtil->gc();
    
this->tsUtil->gc();
    


}


    public: void paint(Graphics* g, int32_t x, int32_t y){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        

    Layer* comp;;
    




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {
comp= dynamic_cast<Layer*>(this->list->objectArray[index]);
    

                        if(comp != 
                                    nullptr
                                 && comp->isVisible())
                        
                                    {
                                    comp->paint(g);
    

                                    }
                                
}



}


};

            

