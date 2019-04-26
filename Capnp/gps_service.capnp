@0xcdd6af4d789f2c5b;

interface GPSService {
	getGPSFix @0 () -> (fix :GPSFix);

	struct GPSFix {
		enum Status {
	        notSeen @0;
	        noFix @1;
	        fix2D @2;
	        fix3D @3;
	    }

		time @0 :Float64; 					# Time of update
		status @1 :Status; 					# Status of the fix
		latitude @2 :Float64; 				# Latitude (degrees)
		longitude @3 :Float64; 				# Longitude (degrees)
		altitude @4 :Float64; 				# Altitude (meters)
		track @5 :Float64;					# Course (relative to true north in degrees)
		speed @6 :Float64;					# Ground speed (m/s)
		climb @7 :Float64;					# Vertical speed (m/s)
		uncertainties @8 :Uncertainties; 	# Uncertainties
	
	    struct Uncertainties {
			time @0 :Float64;				# Expected time uncertainty
			latitude @1 :Float64;			# Latitude position uncertainty (meters)
			longitude @2 :Float64;			# Longitude position uncertainty (meters)
			altitude @3 :Float64;			# Vertical position uncertainty (meters)
			track @4 :Float64;				# Track uncertainty (degrees)
			speed @5 :Float64;				# Speed uncertainty (m/s)
			climb @6 :Float64;				# Vertical speed uncertainty (m/s)
		}
	}
}