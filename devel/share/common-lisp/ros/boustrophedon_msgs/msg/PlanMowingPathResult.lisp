; Auto-generated. Do not edit!


(cl:in-package boustrophedon_msgs-msg)


;//! \htmlinclude PlanMowingPathResult.msg.html

(cl:defclass <PlanMowingPathResult> (roslisp-msg-protocol:ros-message)
  ((plan
    :reader plan
    :initarg :plan
    :type boustrophedon_msgs-msg:StripingPlan
    :initform (cl:make-instance 'boustrophedon_msgs-msg:StripingPlan)))
)

(cl:defclass PlanMowingPathResult (<PlanMowingPathResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlanMowingPathResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlanMowingPathResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name boustrophedon_msgs-msg:<PlanMowingPathResult> is deprecated: use boustrophedon_msgs-msg:PlanMowingPathResult instead.")))

(cl:ensure-generic-function 'plan-val :lambda-list '(m))
(cl:defmethod plan-val ((m <PlanMowingPathResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader boustrophedon_msgs-msg:plan-val is deprecated.  Use boustrophedon_msgs-msg:plan instead.")
  (plan m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlanMowingPathResult>) ostream)
  "Serializes a message object of type '<PlanMowingPathResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'plan) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlanMowingPathResult>) istream)
  "Deserializes a message object of type '<PlanMowingPathResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'plan) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlanMowingPathResult>)))
  "Returns string type for a message object of type '<PlanMowingPathResult>"
  "boustrophedon_msgs/PlanMowingPathResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlanMowingPathResult)))
  "Returns string type for a message object of type 'PlanMowingPathResult"
  "boustrophedon_msgs/PlanMowingPathResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlanMowingPathResult>)))
  "Returns md5sum for a message object of type '<PlanMowingPathResult>"
  "f7a5dc2a7fd3a005db67fe266f849039")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlanMowingPathResult)))
  "Returns md5sum for a message object of type 'PlanMowingPathResult"
  "f7a5dc2a7fd3a005db67fe266f849039")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlanMowingPathResult>)))
  "Returns full string definition for message of type '<PlanMowingPathResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%boustrophedon_msgs/StripingPlan plan~%~%================================================================================~%MSG: boustrophedon_msgs/StripingPlan~%Header header~%StripingPoint[] points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: boustrophedon_msgs/StripingPoint~%geometry_msgs/Point point~%uint8 type~%~%uint8 OUTLINE = 0~%uint8 STRIPE_START = 1~%uint8 STRIPE_END = 2~%uint8 STRIPE_INTERMEDIATE = 3~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlanMowingPathResult)))
  "Returns full string definition for message of type 'PlanMowingPathResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%boustrophedon_msgs/StripingPlan plan~%~%================================================================================~%MSG: boustrophedon_msgs/StripingPlan~%Header header~%StripingPoint[] points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: boustrophedon_msgs/StripingPoint~%geometry_msgs/Point point~%uint8 type~%~%uint8 OUTLINE = 0~%uint8 STRIPE_START = 1~%uint8 STRIPE_END = 2~%uint8 STRIPE_INTERMEDIATE = 3~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlanMowingPathResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'plan))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlanMowingPathResult>))
  "Converts a ROS message object to a list"
  (cl:list 'PlanMowingPathResult
    (cl:cons ':plan (plan msg))
))
