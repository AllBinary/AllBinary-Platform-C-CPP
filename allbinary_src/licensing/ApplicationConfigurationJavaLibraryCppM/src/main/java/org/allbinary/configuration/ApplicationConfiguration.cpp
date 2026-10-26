
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ApplicationConfiguration
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static ApplicationConfiguration getInstance(){

                        if(ApplicationConfiguration::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    ApplicationConfiguration::instance= ApplicationConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ApplicationConfiguration::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool fullscreen = true;

    private: bool showTitleBar = false;

    private: bool progressBarView = false;

    private: const std::string FILE = "ReloadConfiguration.dat";

private: ApplicationConfiguration(){

        try {
            
                        if(FileFactory::getInstance().isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void read(){

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream fileInputStream = fileInputStreamFactory.getFileInputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    

    AbDataInputStream dataInputStream = AbDataInputStream(fileInputStream);;
    

    int32_t fullScreen = dataInputStream.readInt();;
    

                        if(fullScreen == 0)
                        
                                    {
                                    this->setFullscreen(false);
    

                                    }
                                
                             else 
                        if(fullScreen == 1)
                        
                                    {
                                    this->setFullscreen(true);
    

                                    }
                                
                        else {
                            


                            throw Exception("Invalid FullScreen ActivityConfiguration");
                    

                        }
                            

    int32_t progressBarView = dataInputStream.readInt();;
    

                        if(progressBarView == 0)
                        
                                    {
                                    this->setProgressBarView(false);
    

                                    }
                                
                             else 
                        if(progressBarView == 1)
                        
                                    {
                                    this->setProgressBarView(true);
    

                                    }
                                
                        else {
                            


                            throw Exception("Invalid ProgressBarView ActivityConfiguration");
                    

                        }
                            

    int32_t showTitleBar = dataInputStream.readInt();;
    

                        if(showTitleBar == 0)
                        
                                    {
                                    this->setShowTitleBar(false);
    

                                    }
                                
                             else 
                        if(showTitleBar == 1)
                        
                                    {
                                    this->setShowTitleBar(true);
    

                                    }
                                
                        else {
                            


                            throw Exception("Invalid ShowTitleBar ActivityConfiguration");
                    

                        }
                            
this->logUtil.putF("Read Configuration: " +this->toString(), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){

    Closeable closeable = NullCloseable::NULL_CLOSEABLE;;
    

        try {
            this->logUtil.putF("Write Configuration: " +this->toString(), this, "write");
    

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream fileOutputStream = fileInputStreamFactory.getFileOutputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    

    AbDataOutputStream dataOutputStream = AbDataOutputStream(fileOutputStream);;
    
closeable= dataOutputStream;
    

                        if(this->isFullscreen())
                        
                                    {
                                    dataOutputStream.writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream.writeInt(0);
    

                        }
                            

                        if(this->isProgressBarView())
                        
                                    {
                                    dataOutputStream.writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream.writeInt(0);
    

                        }
                            

                        if(this->isShowTitleBar())
                        
                                    {
                                    dataOutputStream.writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream.writeInt(0);
    

                        }
                            
dataOutputStream.flush();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            StreamUtil::getInstance().close(closeable);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public: void update(Feature gameFeature){

                        if(gameFeature == MainFeatureFactory::getInstance().FULL_SCREEN)
                        
                                    {
                                    
    Features features = Features::getInstance();;
    

                        if(features.isFeature(gameFeature))
                        
                                    {
                                    
                        if(!this->isFullscreen())
                        
                                    {
                                    this->setFullscreen(true);
    
this->write();
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(this->isFullscreen())
                        
                                    {
                                    this->setFullscreen(false);
    
this->write();
    

                                    }
                                

                        }
                            

                                    }
                                
}


    public: void setFullscreen(bool fullscreen){
this->fullscreen= fullscreen;
    
}


    public: bool isFullscreen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fullscreen;
    
}


    public: void setShowTitleBar(bool showTitleBar){
this->showTitleBar= showTitleBar;
    
}


    public: bool isShowTitleBar(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->showTitleBar;
    
}


    public: void setProgressBarView(bool progressBarView){
this->progressBarView= progressBarView;
    
}


    public: bool isProgressBarView(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->progressBarView;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("isFullscreen: ");
    
stringBuffer.appendboolean(this->isFullscreen());
    
stringBuffer.append(" isProgressBarView: ");
    
stringBuffer.appendboolean(this->isProgressBarView());
    
stringBuffer.append(" isShowTitleBar: ");
    
stringBuffer.appendboolean(this->isShowTitleBar());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

