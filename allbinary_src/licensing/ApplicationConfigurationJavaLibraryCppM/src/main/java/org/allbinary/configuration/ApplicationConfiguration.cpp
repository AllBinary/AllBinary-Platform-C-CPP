
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP
        #define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/configuration/ApplicationConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        
Object* ApplicationConfiguration::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto ApplicationConfiguration::getInstance() -> ApplicationConfiguration*{

                        if(ApplicationConfiguration::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ApplicationConfiguration::instance= new ApplicationConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ApplicationConfiguration*>(ApplicationConfiguration::instance);
    
}


ApplicationConfiguration::ApplicationConfiguration() : logUtil(LogUtil::getInstance()){

        try {
            
                        if(FileFactory::getInstance()->isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::read() -> void{

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream* fileInputStream = fileInputStreamFactory->getFileInputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    

    AbDataInputStream* dataInputStream = new AbDataInputStream(fileInputStream);;
    

    int32_t fullScreen = dataInputStream->readInt();;
    

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
                            

    int32_t progressBarView = dataInputStream->readInt();;
    

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
                            

    int32_t showTitleBar = dataInputStream->readInt();;
    

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
                            
this->logUtil->putF(JavaString::valueOf("Read Configuration: ") +JavaString::valueOf(JavaString::valueOf(this)), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::write() -> void{

    Closeable* closeable = NullCloseable::NULL_CLOSEABLE;;
    

        {
        
        auto finallyFunction_N67597 = [&]() {
            StreamUtil::getInstance()->close(closeable);
    

        };
        
        struct FinallyGuard_N67597 { decltype(finallyFunction_N67597)& function; ~FinallyGuard_N67597() { function(); } } finallyGuard_N67597{finallyFunction_N67597};
        
        try {
            this->logUtil->putF(JavaString::valueOf("Write Configuration: ") +JavaString::valueOf(JavaString::valueOf(this)), this, "write");
    

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream* fileOutputStream = fileInputStreamFactory->getFileOutputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    

    AbDataOutputStream* dataOutputStream = new AbDataOutputStream(fileOutputStream);;
    
closeable= dataOutputStream;
    

                        if(this->isFullscreen())
                        
                                    {
                                    dataOutputStream->writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream->writeInt(0);
    

                        }
                            

                        if(this->isProgressBarView())
                        
                                    {
                                    dataOutputStream->writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream->writeInt(0);
    

                        }
                            

                        if(this->isShowTitleBar())
                        
                                    {
                                    dataOutputStream->writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream->writeInt(0);
    

                        }
                            
dataOutputStream->flush();
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::update(Feature* gameFeature) -> void{

                        if(gameFeature == MainFeatureFactory::getInstance()->FULL_SCREEN)
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    

                        if(features->isFeature(gameFeature))
                        
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


    auto ApplicationConfiguration::setFullscreen(bool fullscreen) -> void{
this->fullscreen= fullscreen;
    
}


    auto ApplicationConfiguration::isFullscreen() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fullscreen;
    
}


    auto ApplicationConfiguration::setShowTitleBar(bool showTitleBar) -> void{
this->showTitleBar= showTitleBar;
    
}


    auto ApplicationConfiguration::isShowTitleBar() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->showTitleBar;
    
}


    auto ApplicationConfiguration::setProgressBarView(bool progressBarView) -> void{
this->progressBarView= progressBarView;
    
}


    auto ApplicationConfiguration::isProgressBarView() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->progressBarView;
    
}


    auto ApplicationConfiguration::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("isFullscreen: ");
    
stringBuffer->appendboolean(this->isFullscreen());
    
stringBuffer->append(" isProgressBarView: ");
    
stringBuffer->appendboolean(this->isProgressBarView());
    
stringBuffer->append(" isShowTitleBar: ");
    
stringBuffer->appendboolean(this->isShowTitleBar());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP
