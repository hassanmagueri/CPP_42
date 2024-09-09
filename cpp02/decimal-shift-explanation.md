# Shifting the Decimal Point in Fixed-Point Conversion

Let's break this down step-by-step using an example:

Assume: FRACTIONAL_BITS = 16
Float number: 3.14159

## Step 1: Understanding the Scaling Factor

```
1 << 16 = 2^16 = 65536
```

This scaling factor (65536) is equivalent to 1.0 in our fixed-point representation.

## Step 2: Multiplication Process

```
3.14159 * 65536 ≈ 205887.86624
```

## Step 3: Visualizing the Decimal Shift

Decimal representation:
```
Original:  3.14159
Scaled:    205887.86624
```

Binary representation (simplified):
```
Original:  11.001001000011111...
Scaled:    110010010000111110...
            |______________|
               16 bits
```

## Step 4: Fixed-Point Interpretation

In the scaled version, the 16 bits after the binary point represent the fractional part:
```
Integer part: 205887
Fractional part: 0.86624 (in decimal)
```

## Why This Works

1. Multiplying by 2^16 is equivalent to shifting the binary point 16 positions to the right.
2. This shift transforms the original fractional part into an integer part.
3. The new fractional part provides additional precision beyond the original float.

## Precision and Range Trade-off

- More FRACTIONAL_BITS (e.g., 20 or 24) would provide more precision.
- Fewer FRACTIONAL_BITS (e.g., 8 or 12) would allow for a larger range of integers.

## Converting Back to Float

To convert back, we divide by the scaling factor:
```
205887 / 65536 ≈ 3.14159 (original float value)
```

This division effectively shifts the decimal point back to its original position.

