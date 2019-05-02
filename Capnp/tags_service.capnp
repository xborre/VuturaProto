@0xd6754c7d1ed0b666;

interface TagsService {
    getTags @0 () -> (tags :Tags);

    struct Tag {
        location @0 :Location;
        fenceInfo @1 :Fence;
        id @2 :UInt32;
        type @3 :Type;

        struct Location {
            latitude @0 :Float64;
            longitude @1 :Float64;
            altitude @2 :Float64;
        }

        struct Fence {
            radius @0 :UInt32;
            upper @1 :UInt32;
            lower @2 :UInt32;
        }

        enum Type {
            fireFighter @0;
            fireTruck @1;
        }
    }

    struct Tags {
        tags @0 :List(Tag);
    }

    getWarning @1 (warningIn :Warning) -> (warning :Warnings);

    struct Warning {
        id @0 :Text;
        location @1 :Location;
        distance @2 :Float64;
        time @3 :Time;

        struct Location {
            latitude @0 :Float64;
            longitude @1 :Float64;
            altitude @2 :Float64;
        }

        struct Time {
            hour @0 :Int16;
            minute @1 :Int16;
            second @2 :Int16;
        }
    }

    struct Warnings {
        warning @0 :List(Warning);
    }
}
