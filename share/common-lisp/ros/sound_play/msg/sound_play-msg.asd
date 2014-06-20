
(cl:in-package :asdf)

(defsystem "sound_play-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SoundRequest" :depends-on ("_package_SoundRequest"))
    (:file "_package_SoundRequest" :depends-on ("_package"))
  ))